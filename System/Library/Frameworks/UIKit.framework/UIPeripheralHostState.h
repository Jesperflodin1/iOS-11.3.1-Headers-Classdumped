/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary;

@interface UIPeripheralHostState : NSObject {

	UIPeripheralAnimationGeometry _geometry;
	NSDictionary* _screenGeometry;
	BOOL _inPositionIsDestination;

}

@property (assign,nonatomic) UIPeripheralAnimationGeometry geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) NSDictionary * screenGeometry;                       //@synthesize screenGeometry=_screenGeometry - In the implementation block
@property (assign,nonatomic) BOOL inPositionIsDestination;                        //@synthesize inPositionIsDestination=_inPositionIsDestination - In the implementation block
+(id)stateWithGeometry:(UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(BOOL)arg2 ;
-(UIPeripheralAnimationGeometry)geometry;
-(void)dealloc;
-(void)setGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setInPositionIsDestination:(BOOL)arg1 ;
-(void)setScreenGeometry:(NSDictionary *)arg1 ;
-(NSDictionary *)screenGeometry;
-(BOOL)inPositionIsDestination;
@end
