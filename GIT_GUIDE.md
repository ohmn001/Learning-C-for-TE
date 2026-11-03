# Git & GitHub Guide (for the Delta repo)

Remote: `https://github.com/ohmn001/Delta.git` (called `origin`), branch: `main`.

## The big idea (3 places your code lives)

```
Working folder  --git add-->  Staging area  --git commit-->  Local history  --git push-->  GitHub
 (your edits)                 (ready to save)                (saved on Mac)               (backup online)
```

- **commit** = a save point with a message. It only saves on your Mac.
- **push** = upload your commits to GitHub.
- Commit often (small steps). Push when you finish a study session.

## Daily routine (copy this)

```bash
cd /Users/supawat/Delta

git status                 # 1. What changed? (red = not staged, green = staged)
git diff                   # 2. Look at the actual changes (press q to quit)

git add ch01_tutorial/ex1-5_for.c PROGRESS.md   # 3. Stage ONLY the files you want
git status                 # 4. Check: green list is what you expect

git commit -m "Add ex1-5 reverse temperature table"   # 5. Save point
git push                   # 6. Upload to GitHub
```

Why stage specific files instead of `git add .`? Because `.` also adds compiled
binaries (like `ex1-5_for`) and junk you did not mean to commit.

## Writing a good commit message

Short, starts with a verb, says WHAT you did:

- `Add ex1-6 EOF verification`
- `Fix off-by-one in character counter`
- `Update PROGRESS.md for chapter 1`

Avoid: `update`, `stuff`, `asdf`. Future you will not understand them.

One exercise (or one idea) per commit is the easiest to read later.

## Do NOT commit compiled programs

Your `.gitignore` lists binaries one by one, so every new exercise creates a new
untracked file (`ex1-5_for`, `ex1-6_verift_EOF`, ...). Two options:

1. Just never `git add` them (use the specific-file method above).
2. Better: ignore all extensionless files in the chapter folders. Add to `.gitignore`:

   ```
   # Ignore compiled binaries (files with no extension) in chapter folders
   ch*/*
   !ch*/*.*
   !ch*/
   ```

   Then check with `git status` that your `.c` and `.md` files still show up.

Also decide about `input.txt`: commit it if the exercise needs it, otherwise skip it.

## Useful commands

| Goal | Command |
|---|---|
| See what changed | `git status` |
| See line-by-line changes | `git diff` (unstaged), `git diff --staged` (staged) |
| See history | `git log --oneline` |
| Unstage a file (keep edits) | `git restore --staged FILE` |
| Throw away edits to a file (**cannot undo!**) | `git restore FILE` |
| Fix the last commit message (before push) | `git commit --amend -m "new message"` |
| Download changes from GitHub | `git pull` |

## Common problems

**1. "Updates were rejected" on push**
GitHub has commits you do not have (for example you edited a file on github.com).
Run `git pull`, then `git push` again.

**2. I committed a binary by mistake (before push)**
```bash
git rm --cached ch01_tutorial/ex1-5_for   # remove from git, keep the file on disk
git commit --amend --no-edit              # fold the fix into the last commit
```

**3. I want to undo my last commit but keep my code**
```bash
git reset --soft HEAD~1
```
Only do this before you push.

**4. Login asks for a password on push**
GitHub no longer accepts account passwords. Use either:
- GitHub CLI: `brew install gh` then `gh auth login` (easiest), or
- a Personal Access Token (GitHub → Settings → Developer settings → Tokens) as the password.

## Safety rules

- Never commit passwords, API keys, or personal data. This repo is for learning, so keep it that way.
- `CLAUDE.md` and `CHEATSHEET.md` are in `.gitignore` on purpose (private). Do not force-add them.
- Avoid `git push --force` and `git reset --hard`. They can destroy work.
- When unsure, run `git status` first. It is always safe.

## Why this matters for the Delta job

Test engineers keep test scripts, test data, and reports in Git. Clear commit
messages ("Add limit check for 12V rail") and small commits are what teams expect.
Your GitHub history is also proof of steady practice you can show in an interview.
