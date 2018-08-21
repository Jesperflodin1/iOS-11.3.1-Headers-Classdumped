/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSOrderedSet;

@interface DOCFileProviderMonitor : NSObject {

	id _providerMonitoringContext;
	NSMutableDictionary* _providerNames;
	NSOrderedSet* _monitoredIdentifiers;
	/*^block*/id _monitorCallback;

}
-(id)init;
-(void)dealloc;
-(void)notifyIfNecessary;
-(void)monitorProviderNamesForIdentifiers:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

