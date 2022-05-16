import java.lang.reflect.Array;
import java.util.Scanner;

public class coding1test {
    public static void main(String[] args) {
            var answer = 0;

            // 학생 수 만큼 배열의 가지고 있는 유니폼 수를 1로 초기화
            let hasUniform = new Array(n).fill(1);

            // 잃어버린 학생은 -1 을 해줌
            for (let i = 0; i < lost.length; i++) {
                hasUniform[lost[i] - 1]--;
            }

            // 여벌이 있으면 +1 을 해줌
        for (let i = 0; i < reserve.length; i++) {
                hasUniform[reserve[i] - 1]++;
            }

            for (let i = 0; i < hasUniform.length; i++) {
                // 유니폼이 없을 때 좌우 학생이 유니폼이 있을경우 빌려줌
                if (hasUniform[i] === 0) {
                    if (hasUniform[i - 1] === 2) {
                        hasUniform[i]++;
                        hasUniform[i - 1]--;
                    } else if (hasUniform[i + 1] === 2) {
                        hasUniform[i]++;
                        hasUniform[i + 1]--;
                    }
                }

                // 유니폼이 1개이상 있으면 통과
                if (hasUniform[i] >= 1) {
                    answer++;
                }
            }

            return answer;
        }
    }
}
