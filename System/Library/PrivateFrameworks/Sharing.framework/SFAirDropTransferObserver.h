/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropTransferObserverProtocol.h>

@protocol SFAirDropTransferObserverDelegate;
@class NSMutableDictionary, NSString;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol> {

	id<SFAirDropTransferObserverDelegate> _delegate;
	NSMutableDictionary* _transferIdentifierToTransfer;

}

@property (retain) NSMutableDictionary * transferIdentifierToTransfer;                           //@synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer - In the implementation block
@property (assign,nonatomic,__weak) id<SFAirDropTransferObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<SFAirDropTransferObserverDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropTransferObserverDelegate>)arg1 ;
-(void)activate;
-(id)exportedInterface;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)updatedTransfer:(id)arg1 ;
-(NSMutableDictionary *)transferIdentifierToTransfer;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
-(void)updateActionHandlersOnTransfer:(id)arg1 ;
-(void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
-(void)removedTransfer:(id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)setTransferIdentifierToTransfer:(NSMutableDictionary *)arg1 ;
@end

