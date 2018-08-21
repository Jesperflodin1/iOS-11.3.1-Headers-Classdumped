/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIBezierPath, NTKBezierPathPointModel, UIColor, NSString;

@interface NTKBezierPathView : UIView <CAAnimationDelegate> {

	UIBezierPath* _path;
	UIBezierPath* _animateToPath;
	NTKBezierPathPointModel* _pointModel;
	UIColor* _pathColor;

}

@property (nonatomic,retain) UIBezierPath * path;                                 //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NTKBezierPathPointModel * pointModel;              //@synthesize pointModel=_pointModel - In the implementation block
@property (nonatomic,retain) UIColor * pathColor;                                 //@synthesize pathColor=_pathColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(UIBezierPath *)path;
-(void)setPath:(UIBezierPath *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)_shapeLayer;
-(CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 ;
-(void)setPathColor:(UIColor *)arg1 ;
-(void)animateToPath:(id)arg1 duration:(double)arg2 curve:(long long)arg3 ;
-(NTKBezierPathPointModel *)pointModel;
-(UIColor *)pathColor;
@end

