/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDropSession <UIDragDropSession,NSProgressReporting>
@property (nonatomic,readonly) id<UIDragSession> localDragSession; 
@property (assign,nonatomic) unsigned long long progressIndicatorStyle; 
@required
-(void)setProgressIndicatorStyle:(unsigned long long)arg1;
-(unsigned long long)progressIndicatorStyle;
-(id<UIDragSession>)localDragSession;
-(id)loadObjectsOfClass:(Class)arg1 completion:(/*^block*/id)arg2;

@end

