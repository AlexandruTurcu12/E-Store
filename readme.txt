	Această temă a constat în implementarea unui sistem pentru un magazin online, folosind numeroase concepte ale programării orientate pe obiecte. A fost utilă pentru a exersa și aprofunda aceste concepte.

Cerința 1

	În cadrul acestei cerințe, am implementat numeroși constructori, operatori egal, setteri, getteri și afișări în clasele din folderele Product, User și ShoppingCart. Am întâmpinat o dilemă în cadrul funcției priceAfterDiscount din clasa DiscountedProduct, întrucât formula discountului din viața reală nu funcționa, dar am remediat această problemă în urma consultării clasei TestHelper.

Cerința 2

	Aici doar am implementat 3 getteri și un setter în cadrul clasei Server. La setter am descoperit o metodă alternativă și interesantă pentru a parcurge o listă, cu ajutorul keyword-ului “auto”.

Cerința 3

	În cadrul acestei cerințe, am rezolvat interogările din clasa QuerySolver.
	În primul query, am adăugat într-o listă toate elementele din lista de produse care au categoria “espressor” și tipul de produs “Discounted product”.
	În al doilea query, am adăugat într-o listă toate elementele din lista de useri care au tipul de user “BasicUser” și au costul de transport decât 11.5.
	În al treilea query, am adăugat într-o listă toate elementele din lista de produse care au tipul de produs “Resealed Product” și motivul “lipsa_accesorii”, accesând funcția “getReason” aplicând dynamic cast elementelor listei, apoi am sortat lista nou creată după preț folosind o funcție numită “ResealedProducts”.
	În al patrulea query, am adăugat într-o listă toate elementele din lista de produse care au tipul de produs “Food Product”, apoi am sortat lista nou creată după nume, țara de origine și prețul per kilogram folosind o funcție numită “FoodProducts”.
	În al cincilea query, am create un map cu fiecare județ și numărul său de locuitori. Apoi am parcurs map-ul nou creat pentru a memora județul cu numărul maxim de locuitori într-o nouă variabilă. La final, am adăugat într-o listă toate elementele din lista de useri care locuiesc la casă în județul cu cei mai mulți locuitori, apoi am sortat lista nou creată după ID-ul user-ului folosind o funcție numită “Inhabitants”.
	În al șaselea query, mai întâi am parcurs lista de useri pentru a îi găsi pe cei premium. Apoi am parcurs lista de discount-uri prin dynamic cast, am verificat ca produsele cu discount să se găsească și în lista generală de produse, iar dacă au avut categoria “telefon” sau “imprimantă”, am adăugat produsele într-o listă nouă.
	Toate funcțiile de sortare au fost create în clasa utility și funcționează după următorul principiu : dacă se îndeplinește criteriul de sortare dintre două elemente, funcția returnează true; altfel, returnează false.

Cerința 4

	Aici am simulat comportamentul unui “Least Recently Used Cache” în cadrul clasei LRUCache. Pe lângă setter și getteri, în funcția processRequests am creat vectorul lru. Pentru fiecare element al vectorului requestsNo, am verificat dacă acesta se află în lru. Dacă nu se afla, l-am adăugat la început; dacă se afla, am făcut permutările necesare pentru a aduce cel mai recent element din requestsNo la începutul lru. Odată ce lru a ajuns la capacitatea maximă, procedeul este același, cu mențiunea că se elimină ultimul element din vector când se adaugă unul nou. În rezolvarea acestei cerințe am descoperit o metodă interesantă de sortare, și anume funcția iter_swap, inclusă în <algorithm>.

Cerința 5

	În cadrul acestei cerințe, am implementat funcțiile requestAddProduct și requestDeleteProduct din clasa Server. Mai întâi parcurg lista __UserID__ProductsCart__ și verific dacă aici găsesc user ID-ul căutat. Apoi parcurg lista de useri și verific dacă și aici se află ID-ul. Apoi parcurg al doilea element (shopping cart-ul) din map-ul shoppingCart și verific dacă aici se află ID-ul produsului căutat. Apoi parcurg lista de produse și verific dacă și aici se află produsul.
	În funcția requestAddProduct, în cazul în care cantitatea cerută e mai mică decât cea disponibilă, adaug produsul în coșul utilizatorului și scad cantitatea disponibilă. În funcția requestDeleteProduct, în cazul în care cantitatea din coș este mai mică decât cantitatea care trebuie eliminată, atunci scot această cantitate și o adaug în lista de produse. În cazul în care cantitatea din coș este mai mare decât cantitatea care trebuie eliminată, atunci șterg produsul cu totul (și, desigur, adaug cantitatea scoasă în lista de produse).
