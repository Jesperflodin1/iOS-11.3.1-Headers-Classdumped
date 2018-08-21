/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKReferencedAction : SKAction {

	SKCReferencedAction* _mycaction;
	SKAction* _referencedAction;
	NSString* _referencedActionName;

}
+(id)referenceActionWithName:(id)arg1 duration:(double)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingFunction:(/*^block*/id)arg1 ;
-(id)reversedAction;
-(id)subactions;
-(void)_ensureReferencedAction;
-(void)setTimingMode:(long long)arg1 ;
@end
