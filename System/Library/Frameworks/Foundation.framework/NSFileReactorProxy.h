/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSFileAccessNode;

@interface NSFileReactorProxy : NSObject {

	NSXPCConnection* _client;
	id _reactorID;
	NSFileAccessNode* _itemLocation;
	unsigned _effectiveUserIdentifier;

}
+(void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 ;
-(void)setItemLocation:(id)arg1 ;
-(id)itemLocation;
-(id)reactorID;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg1 reactorID:(id)arg2 ;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(id)client;
@end

