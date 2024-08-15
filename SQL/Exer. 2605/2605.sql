SELECT products.name, providers.name
from products
INNER JOIN providers ON providers.id = products.id_providers
WHERE products.id_categories = 6
