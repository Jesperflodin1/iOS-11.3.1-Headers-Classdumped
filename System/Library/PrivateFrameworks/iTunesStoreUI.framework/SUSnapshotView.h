/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUSnapshotView : UIView {

	UIView* _imageView;

}
-(void)layoutSubviews;
-(void)dealloc;
-(void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2 ;
-(void)_takeIOSurfaceSnapshotOfView:(id)arg1 ;
-(void)_takeCGSnapshotOfView:(id)arg1 ;
@end

