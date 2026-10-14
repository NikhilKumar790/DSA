select P.firstname , P.lastname , a.city, a.state 
from Person P left join Address a on  P.PersonID = a.PersonID;