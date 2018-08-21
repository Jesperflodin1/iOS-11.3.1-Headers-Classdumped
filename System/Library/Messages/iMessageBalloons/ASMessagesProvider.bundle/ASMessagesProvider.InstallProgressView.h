/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider20InstallProgressLayer;

@interface ASMessagesProvider.InstallProgressView : UIView {

	 state;
	 progressLayer;
	 completionHandler;
	 progress;

}

@property (retain,nonatomic) _TtC18ASMessagesProvider20InstallProgressLayer * progressLayer; 
@property (copy,nonatomic) id completionHandler; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)updateWithProgress:(double)arg1 ;
-(_TtC18ASMessagesProvider20InstallProgressLayer *)progressLayer;
-(void)setProgressLayer:(_TtC18ASMessagesProvider20InstallProgressLayer *)arg1 ;
@end
