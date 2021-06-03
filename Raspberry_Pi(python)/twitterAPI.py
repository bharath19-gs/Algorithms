from twython import Twython

C_KEY="Rj0int3MLmJyk9ZPfl4OQq1n4"
C_SECRET="ChZmvswQ8lZ7mESJNb6ShPoqVfoMKul65pj4sEBw87u6g7qVA3"
A_TOKEN="1290544975076143104-J5Ulge5kxe57WouAdBnhiWUMyms6VT"
A_SECRET="KrWUcWdB9ZV22WPHYsKY1hYWgCi02uf753pbEnZDr3A2l"

api = Twython(C_KEY,C_SECRET,A_TOKEN,A_SECRET)
api.verify_credentials()
api.update_status(status="THIS IS ALL DONE FROM MY PI!!!!")
