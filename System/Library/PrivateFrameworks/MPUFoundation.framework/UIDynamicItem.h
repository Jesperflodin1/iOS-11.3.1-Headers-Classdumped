/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIBezierPath;


@protocol UIDynamicItem <NSObject>
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
@optional
-(unsigned long long)collisionBoundsType;
-(UIBezierPath *)collisionBoundingPath;

@required
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1;
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1;
-(CGAffineTransform)transform;

@end

