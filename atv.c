
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))

media = (nota1 * 4 + nota2 * 6) / 10

# exibe a média e o conceito final
if media < 5.0:
    conceito = "D"
elif media < 7.0:
    conceito = "C"
elif media < 9.0:
    conceito = "B"
else:
    conceito = "A"

print(f"Média: {media:.1f}")
print(f"Conceito: {conceito}")
    