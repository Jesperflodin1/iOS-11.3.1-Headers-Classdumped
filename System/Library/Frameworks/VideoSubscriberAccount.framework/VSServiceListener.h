/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSServiceConnectionHandlerDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSArray, NSXPCInterface, NSMutableSet, NSString;

@interface VSServiceListener : NSObject <VSServiceConnectionHandlerDelegate, NSXPCListenerDelegate> {

	NSArray* _entitlementNames;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSMutableSet* _connectionHandlers;

}

@property (nonatomic,retain) NSMutableSet * connectionHandlers;               //@synthesize connectionHandlers=_connectionHandlers - In the implementation block
@property (nonatomic,copy) NSArray * entitlementNames;                        //@synthesize entitlementNames=_entitlementNames - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                               //@synthesize exportedObject=_exportedObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSXPCInterface *)exportedInterface;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setEntitlementNames:(NSArray *)arg1 ;
-(void)connectionHandlerDidFinish:(id)arg1 ;
-(NSMutableSet *)connectionHandlers;
-(NSArray *)entitlementNames;
-(void)_addConnectionHandler:(id)arg1 ;
-(void)_removeConnectionHandler:(id)arg1 ;
-(void)setConnectionHandlers:(NSMutableSet *)arg1 ;
-(id)exportedObject;
@end

