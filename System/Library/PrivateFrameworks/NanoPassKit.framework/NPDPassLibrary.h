/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PDXPCServiceExportedInterface.h>

@protocol NPDPassLibraryDelegate, OS_dispatch_queue;
@class NSXPCConnection, NPKPassLibraryFilter, NSString, NSObject;

@interface NPDPassLibrary : NSObject <PDXPCServiceExportedInterface> {

	BOOL _serviceActive;
	int _remoteProcessIdentifier;
	NSXPCConnection* _connection;
	NPKPassLibraryFilter* _filter;
	NSString* _remoteProcessApplicationIdentifier;
	id<NPDPassLibraryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) NSXPCConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL serviceActive;                                                     //@synthesize serviceActive=_serviceActive - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NPKPassLibraryFilter * filter;                                //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSString * remoteProcessApplicationIdentifier;              //@synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier - In the implementation block
@property (readonly) int remoteProcessIdentifier;                                          //@synthesize remoteProcessIdentifier=_remoteProcessIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<NPDPassLibraryDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NPDPassLibraryDelegate>)delegate;
-(void)setDelegate:(id<NPDPassLibraryDelegate>)arg1 ;
-(NPKPassLibraryFilter *)filter;
-(void)setFilter:(NPKPassLibraryFilter *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setServiceActive:(BOOL)arg1 ;
-(void)serviceResumed;
-(void)serviceSuspended;
-(int)remoteProcessIdentifier;
-(NSString *)remoteProcessApplicationIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)serviceActive;
-(void)broadcastPassAdded:(id)arg1 ;
-(void)broadcastPassUpdated:(id)arg1 ;
-(void)broadcastPassRemoved:(id)arg1 ;
@end

