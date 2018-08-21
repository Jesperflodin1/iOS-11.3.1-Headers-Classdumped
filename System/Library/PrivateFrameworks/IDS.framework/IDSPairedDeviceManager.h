/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSDaemonListenerProtocol.h>

@class _IDSCompletionHandler, NSSet, NSString;

@interface IDSPairedDeviceManager : NSObject <IDSDaemonListenerProtocol> {

	_IDSCompletionHandler* _deleteCompletion;
	_IDSCompletionHandler* _localCompletion;
	_IDSCompletionHandler* _pairedCompletion;
	_IDSCompletionHandler* _deliveryStatsCompletion;
	NSSet* _allowedTrafficClassifiers;

}

@property (nonatomic,retain) NSSet * allowedTrafficClassifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)dropAllMessagesWithoutAnyAllowedClassifier;
-(void)setPairedDeviceInfo:(id)arg1 ;
-(void)localDeviceInfo:(id)arg1 ;
-(void)pairedDeviceInfo:(id)arg1 ;
-(void)deliveryStats:(id)arg1 ;
-(void)device:(id)arg1 pairingDeleted:(BOOL)arg2 ;
-(void)device:(id)arg1 pairingAdded:(BOOL)arg2 ;
-(void)deletePairedDevice:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)getPairedDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)getDeliveryStatsWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)setAllowedTrafficClassifiers:(NSSet *)arg1 ;
-(NSSet *)allowedTrafficClassifiers;
-(void)getLocalDeviceInfoWithCompletionBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
@end

