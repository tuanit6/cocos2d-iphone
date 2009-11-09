#import "cocos2d.h"

//CLASS INTERFACE
@interface AppController : NSObject <UIAccelerometerDelegate, UIAlertViewDelegate, UITextFieldDelegate, UIApplicationDelegate>
{
	UIWindow	*window;
}
@end

@interface AtlasDemo: CCLayer
{
    CCTextureAtlas *atlas;
}
-(NSString*) title;
@end


@interface Atlas1 : AtlasDemo
{}
-(void) addNewSpriteWithCoords:(CGPoint)p;
@end

@interface Atlas3 : AtlasDemo
{}
@end

@interface Atlas4 : AtlasDemo
{
	int dir;
}
@end

@interface AtlasZVertex : AtlasDemo
{
	int dir;
	float	time;
}
@end

@interface Atlas5 : AtlasDemo
{}
@end

@interface Atlas6 : AtlasDemo
{}
@end

@interface Atlas7 : AtlasDemo
{}
@end

@interface Atlas8 : AtlasDemo
{}
@end

@interface AtlasNewTexture : AtlasDemo
{
	CCTexture2D	*texture1;
	CCTexture2D	*texture2;
}
-(void) addNewSprite;
@end

@interface SpriteFrameTest : AtlasDemo
{
}
@end

