/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKProcessAssertionBackgroundTaskManager : NSObject {

	unsigned _needsToRunInBackgroundCount;
	unsigned long long _backgroundTask;
	HashSet<WebKit::ProcessAssertionClient *, WTF::PtrHash<WebKit::ProcessAssertionClient *>, WTF::HashTraits<WebKit::ProcessAssertionClient *> >* _clients;

}
+(id)shared;
-(id)init;
-(void)dealloc;
-(void)addClient:(ProcessAssertionClient*)arg1 ;
-(void)removeClient:(ProcessAssertionClient*)arg1 ;
-(void)_notifyClientsOfImminentSuspension;
-(void)_updateBackgroundTask;
-(void)incrementNeedsToRunInBackgroundCount;
-(void)decrementNeedsToRunInBackgroundCount;
@end

