/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKMessageEntryContentViewDelegate <UIScrollViewDelegate>
@required
-(void)messageEntryContentViewDidChange:(id)arg1;
-(BOOL)messageEntryContentViewShouldBeginEditing:(id)arg1;
-(void)messageEntryContentViewDidBeginEditing:(id)arg1;
-(void)messageEntryContentViewDidEndEditing:(id)arg1;
-(BOOL)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
-(CGSize*)messageEntryContentViewMaxShelfPluginViewSize:(id)arg1;
-(void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
-(void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(BOOL)arg2;
-(void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
-(void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
-(void)messageEntryContentViewCancelWasTapped:(id)arg1 shelfPluginPayload:(id)arg2;

@end

