/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString;

@interface MSTrackListTableHeaderView : UIView {

	CGSize _titleSize;
	NSString* _title;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)sizeToFit;
@end
