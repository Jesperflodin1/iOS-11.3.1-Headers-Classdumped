/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKBrowserSwitcherFooterViewDataSource.h>

@protocol CKBrowserSwitcherFooterViewDataSource <NSObject>
@required
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2;

@end


@class NSString;

@interface CKBrowserSwitcherFooterViewDataSource : NSObject <CKBrowserSwitcherFooterViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)numberOfPluginsInSwitcherView:(id)arg1 forSection:(unsigned long long)arg2 ;
-(id)switcherView:(id)arg1 modelAtIndexPath:(id)arg2 type:(long long*)arg3 ;
-(id)switcherView:(id)arg1 indexPathOfModelWithIdentifier:(id)arg2 ;
-(id)pluginManager;
@end

