/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class NSMapTable;

@interface JSVirtualMachine : NSObject {

	OpaqueJSContextGroupRef m_group;
	Lock m_externalDataMutex;
	NSMapTable* m_contextCache;
	NSMapTable* m_externalObjectGraph;
	NSMapTable* m_externalRememberedSet;

}
+(id)virtualMachineWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(void)addContext:(id)arg1 forGlobalContextRef:(OpaqueJSContextRef)arg2 ;
-(id)contextForGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(id)initWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(BOOL)isOldExternalObject:(id)arg1 ;
-(void)addExternalRememberedObject:(id)arg1 ;
-(Lock*)externalDataMutex;
-(id)externalObjectGraph;
-(id)externalRememberedSet;
-(id)init;
-(void)dealloc;
-(void)addManagedReference:(id)arg1 withOwner:(id)arg2 ;
-(void)removeManagedReference:(id)arg1 withOwner:(id)arg2 ;
@end

