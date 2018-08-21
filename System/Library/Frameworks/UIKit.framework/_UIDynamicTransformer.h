/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicItem.h>

@class NSString, UIBezierPath;

@interface _UIDynamicTransformer : NSObject <UIDynamicItem> {

	CGPoint _center;
	/*^block*/id _action;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform transform; 
@property (nonatomic,readonly) unsigned long long collisionBoundsType; 
@property (nonatomic,readonly) UIBezierPath * collisionBoundingPath; 
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(CGRect)bounds;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(id)initWithActionBlock:(/*^block*/id)arg1 ;
@end
