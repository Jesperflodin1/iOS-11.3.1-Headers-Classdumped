/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MDLJointAnimation.h>

@class NSString, NSArray, MDLAnimatedVector3Array, MDLAnimatedQuaternionArray;

@interface MDLPackedJointAnimation : MDLObject <NSCopying, MDLJointAnimation> {

	NSString* _name;
	NSArray* _jointPaths;
	MDLAnimatedVector3Array* _translations;
	MDLAnimatedQuaternionArray* _rotations;
	MDLAnimatedVector3Array* _scales;

}

@property (nonatomic,readonly) NSArray * jointPaths;                                //@synthesize jointPaths=_jointPaths - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * translations;              //@synthesize translations=_translations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedQuaternionArray * rotations;              //@synthesize rotations=_rotations - In the implementation block
@property (nonatomic,readonly) MDLAnimatedVector3Array * scales;                    //@synthesize scales=_scales - In the implementation block
-(MDLAnimatedVector3Array *)scales;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 jointPaths:(id)arg2 ;
-(MDLAnimatedVector3Array *)translations;
-(MDLAnimatedQuaternionArray *)rotations;
-(NSArray *)jointPaths;
@end
