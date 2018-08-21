/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSObject;

@interface NUSchemaRegistry : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _schemas;
	NSMutableDictionary* _versions;

}
+(id)sharedRegistry;
-(id)init;
-(id)schemaWithIdentifier:(id)arg1 ;
-(void)_registerBuiltInSchemas;
-(BOOL)_registerSchema:(id)arg1 error:(out id*)arg2 ;
-(BOOL)_registerVersion:(id)arg1 withOriginalIdentifier:(id)arg2 error:(out id*)arg3 ;
-(BOOL)registerSchema:(id)arg1 error:(out id*)arg2 ;
-(id)_schemaWithIdentifier:(id)arg1 ;
-(id)_latestVersionWithOriginalIdentifier:(id)arg1 ;
-(id)_allVersionsWithOriginalIdentifier:(id)arg1 upToVersion:(id)arg2 ;
-(BOOL)registerSchemas:(id)arg1 error:(out id*)arg2 ;
-(id)latestVersionWithNameSpace:(id)arg1 name:(id)arg2 ;
-(id)versionsCompatibleWithIdentifier:(id)arg1 ;
@end

