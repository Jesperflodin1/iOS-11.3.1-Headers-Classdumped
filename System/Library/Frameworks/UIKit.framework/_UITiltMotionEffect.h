/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@interface _UITiltMotionEffect : UIMotionEffect {

	double _maximumHorizontalTiltAngle;
	double _maximumVerticalTiltAngle;
	double _rotatingSphereRadius;

}

@property (assign,nonatomic) double maximumHorizontalTiltAngle;              //@synthesize maximumHorizontalTiltAngle=_maximumHorizontalTiltAngle - In the implementation block
@property (assign,nonatomic) double maximumVerticalTiltAngle;                //@synthesize maximumVerticalTiltAngle=_maximumVerticalTiltAngle - In the implementation block
@property (assign,nonatomic) double rotatingSphereRadius;                    //@synthesize rotatingSphereRadius=_rotatingSphereRadius - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(double)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(double)maximumVerticalTiltAngle;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(double)rotatingSphereRadius;
@end
