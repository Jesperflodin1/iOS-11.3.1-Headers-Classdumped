/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosEditUI/PUPhotoEditToolControllerView.h>

@class PUAdjustmentsModeBar;

@interface PUAdjustmentsToolControllerView : PUPhotoEditToolControllerView {

	PUAdjustmentsModeBar* _modeBar;

}

@property (assign,nonatomic,__weak) PUAdjustmentsModeBar * modeBar;              //@synthesize modeBar=_modeBar - In the implementation block
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(PUAdjustmentsModeBar *)modeBar;
-(void)setModeBar:(PUAdjustmentsModeBar *)arg1 ;
@end
