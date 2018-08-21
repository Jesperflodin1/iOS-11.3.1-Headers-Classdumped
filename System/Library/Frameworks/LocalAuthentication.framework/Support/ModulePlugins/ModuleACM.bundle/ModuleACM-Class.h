/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModuleBase/Module.h>

@class NSMapTable;

@interface ModuleACM : Module {

	NSMapTable* _activePlugins;

}
-(void)_trackPlugin:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 ;
-(void)_cleanupMostGreedyProcess;
-(id)init;
-(void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
@end

