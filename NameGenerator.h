#import <UIKit/UIKit.h>

@interface NameGenerator : NSObject
{
  NSMutableArray *vowel;
	
	NSMutableArray *malePre;
	NSMutableArray *maleStart;
	NSMutableArray *maleMiddle;
	NSMutableArray *maleEnd;
	NSMutableArray *malePost;
	
	NSMutableArray *male;
	
	NSMutableArray *femalePre;
	NSMutableArray *femaleStart;
	NSMutableArray *femaleMiddle;
	NSMutableArray *femaleEnd;
	NSMutableArray *femalePost;
	
	NSMutableArray *female;
}

- (NSString *)getRandomName;
- (NSString *)getRandomName:(BOOL)generated male:(BOOL)sex prefix:(BOOL)prefix postfix:(BOOL)postfix;
- (NSString *)getHashName:(BOOL)generated male:(BOOL)sex prefix:(BOOL)prefix postfix:(BOOL)postfix withHash: (NSString *) stringToHash;

@end
