import openai

# API 키 설정
openai.api_key = 'your-api-key'

# 번역을 위한 함수 정의
def translate_text(text, source_lang='ko', target_lang='en'):
    response = openai.Completion.create(
        engine="text-davinci-003",
        prompt=f"Translate the following text from {source_lang} to {target_lang}: {text}",
        max_tokens=1024
    )
    return response.choices[0].text.strip()

# 데이터 세트 예시
korean_text = [
    "알고리즘 문제를 풀기 위해서는 문제의 요구사항을 정확히 이해해야 합니다.",
    "다항식의 계수를 구하는 방법은 다양합니다.",
    "컴퓨터 네트워크에서 패킷 전송은 중요한 개념입니다."
]

# 번역 수행
translated_texts = [translate_text(text) for text in korean_text]

# 번역 결과 출력
for original, translated in zip(korean_text, translated_texts):
    print(f"Original: {original}")
    print(f"Translated: {translated}\n")