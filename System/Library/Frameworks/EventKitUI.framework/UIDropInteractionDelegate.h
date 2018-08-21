/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDropInteractionDelegate <NSObject>
@optional
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;

@end

