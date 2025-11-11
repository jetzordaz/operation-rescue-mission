1) Clone the repo
git clone https://github.com/<ORG_OR_USERNAME>/operation-rescue-bravo.git
cd operation-rescue-bravo

2) Create your feature branch

Choose one that matches your work:

# Person A – Scene, levels, state flow
git checkout -b feature/scene-and-levels

# Person B – Player movement, weapons, bullets, collision
git checkout -b feature/player-weapons

# Person C – UI, HUD, menus, backgrounds/parallax, audio
git checkout -b feature/ui-and-backgrounds


Push it once so GitHub tracks it:

git push -u origin <your-branch-name>

3) Daily workflow (DO THIS EVERY TIME)
git switch <your-branch-name>      # ensure you’re on your branch
git pull origin main               # get latest work
# …make changes in Code::Blocks…
git add .
git commit -m "Concise: what changed and why"
git push


Open a Pull Request on GitHub → get 1 review → merge into main.

Rule: Never commit straight to main. Keep main always runnable.

4) Build & run (Code::Blocks, Lesson 14 framework)

Open Lesson14_BUL.cbp.

Linker → Link libraries (order matters):

SOIL2
freeglut
glu32
opengl32
winmm
gdi32
user32
kernel32


Assets go here:

assets/images/ (textures: russia_bg.png, jet1.png, etc.)

assets/sounds/ (SFX/music)

assets/models/ (optional .obj)

Working directory: set to your EXE folder (e.g., bin/Debug) or build absolute paths in code.

Build & Run (F9).

Common fixes

Texture not loading → wrong working dir or missing file under assets/images.

“undefined reference” → missing linker lib or wrong order.

Black screen → forgot glClear/camera or drew behind camera (Z).

5) File layout (what goes where)
src/
  _Scene.*         # game states & level flow
  _inputs.*        # (optional) extra input helpers
  Player.*         # movement, fire requests
  Enemy.*          # spawns, simple behaviors
  Weapons.*        # bullet structs, pools, cooldowns, collisions
  HUD.*            # text/weapon/level indicators
  Parallax.*       # scrolling Russia background / terrain

assets/
  images/          # jet textures, sky/mountains, menus, HUD art
  sounds/          # shoot/explosion/music
  models/          # optional .obj

6) Milestones

Checkpoint (Nov 17) — 80%

Menu → Jet Select → Level 1 → Level 2 → Level 3 → Mission Complete (playable path)

Player movement + 3 weapons (1/2/3), bullets visible

Enemies spawn & shoot, simple collisions

HUD shows current weapon/level

Final (Dec 3) — 100%

Tuned difficulty & waves

Mission Failed / Complete screens

Backgrounds, SFX, small cutscene

README updated with controls + screenshots

7) Branch & commit conventions

Branch names: feature/<area>, fix/<issue>, chore/<task>

Commits: present tense, concise

feat: add missile projectile & cooldown

fix: correct texture path for jet select

chore: organize assets/images

8) Controls (current plan)

Arrows: Move jet (X/Y)

SPACE: Fire

1 / 2 / 3: Machine Gun / Cannon / Missile

ENTER: Confirm / advance

ESC: Quit

9) Roles (initial)

A: state flow, camera, level progression

B: player + weapons + collisions

C: menus, HUD, parallax backgrounds, audio

Anyone can help anyone — just coordinate in Issues/Projects.

10) Using GitHub Projects (recommended)

Create a Board with columns: To Do / In Progress / Done.
Add tasks (cards): “Parallax sky,” “Bullet pool,” “Mission Complete screen,” etc.
Assign owners & due dates (aim for the Nov 17 checkpoint).
