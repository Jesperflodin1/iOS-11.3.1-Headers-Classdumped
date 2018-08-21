/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSMapTable, NSString, PKPaymentPass, PKRemoteDevice, PKPaymentRequest, CNContact, PKShippingMethod, PKPayment, PKPaymentOptionsDefaults, PKPaymentOptionsRecents, PKPassLibrary, PKPaymentWebService, PKPeerPaymentService, PKPeerPaymentQuote, PKPaymentApplication, PKPaymentInstructions, PKRemotePaymentInstrument, NSSet, NSDecimalNumber;

@interface PKPaymentAuthorizationDataModel : NSObject <PKPaymentValidating> {

	NSMutableArray* _items;
	NSMutableDictionary* _typeToItemMap;
	unsigned long long _holdPendingUpdatesCount;
	BOOL _ignoreProximity;
	NSArray* _acceptedPasses;
	NSArray* _unavailablePasses;
	NSMutableDictionary* _acceptedApplications;
	NSMapTable* _instrumentToDeviceMap;
	NSMutableDictionary* _remoteDeviceToAcceptedInstruments;
	NSArray* _allRemoteDevices;
	NSMutableDictionary* _statusForPass;
	NSString* _paymentApplicationIdentifierForErrors;
	NSArray* _clientErrors;
	BOOL _shippingEditable;
	PKPaymentPass* _pass;
	PKRemoteDevice* _remoteDevice;
	long long _mode;
	PKPaymentRequest* _paymentRequest;
	NSArray* _paymentContentItems;
	NSString* _hostAppLocalizedName;
	NSString* _hostApplicationIdentifier;
	CNContact* _shippingEmail;
	CNContact* _shippingPhone;
	CNContact* _shippingName;
	CNContact* _shippingAddress;
	PKShippingMethod* _shippingMethod;
	NSString* _shippingType;
	NSString* _shippingEditableMessage;
	CNContact* _billingAddress;
	NSArray* _paymentErrors;
	PKPayment* _payment;
	PKPaymentOptionsDefaults* _defaults;
	PKPaymentOptionsRecents* _recents;
	PKPassLibrary* _library;
	PKPaymentWebService* _paymentWebService;
	PKPeerPaymentService* _peerPaymentService;
	NSArray* _pendingTransactions;
	/*^block*/id _updateHandler;
	PKPeerPaymentQuote* _peerPaymentQuote;
	PKPaymentApplication* _paymentApplication;
	PKPaymentInstructions* _instructions;
	PKRemotePaymentInstrument* _remotePaymentInstrument;
	PKRemotePaymentInstrument* _initialRemotePaymentInstrument;
	NSSet* _allAcceptedRemotePaymentInstruments;
	NSSet* _allUnavailableRemotePaymentInstruments;
	CNContact* _cachedRecentAddress;

}

@property (nonatomic,retain) CNContact * cachedRecentAddress;                                         //@synthesize cachedRecentAddress=_cachedRecentAddress - In the implementation block
@property (nonatomic,readonly) NSString * defaultPaymentPassUniqueIdentifier; 
@property (nonatomic,readonly) long long mode;                                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) PKPaymentRequest * paymentRequest;                                       //@synthesize paymentRequest=_paymentRequest - In the implementation block
@property (nonatomic,retain) NSArray * paymentContentItems;                                           //@synthesize paymentContentItems=_paymentContentItems - In the implementation block
@property (nonatomic,retain) NSString * hostAppLocalizedName;                                         //@synthesize hostAppLocalizedName=_hostAppLocalizedName - In the implementation block
@property (nonatomic,retain) NSString * hostApplicationIdentifier;                                    //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (nonatomic,retain) CNContact * shippingEmail;                                               //@synthesize shippingEmail=_shippingEmail - In the implementation block
@property (nonatomic,retain) CNContact * shippingPhone;                                               //@synthesize shippingPhone=_shippingPhone - In the implementation block
@property (nonatomic,retain) CNContact * shippingName;                                                //@synthesize shippingName=_shippingName - In the implementation block
@property (nonatomic,retain) CNContact * shippingAddress;                                             //@synthesize shippingAddress=_shippingAddress - In the implementation block
@property (nonatomic,retain) PKShippingMethod * shippingMethod;                                       //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,retain) NSString * shippingType;                                                 //@synthesize shippingType=_shippingType - In the implementation block
@property (assign,getter=isShippingEditable,nonatomic) BOOL shippingEditable;                         //@synthesize shippingEditable=_shippingEditable - In the implementation block
@property (nonatomic,retain) NSString * shippingEditableMessage;                                      //@synthesize shippingEditableMessage=_shippingEditableMessage - In the implementation block
@property (nonatomic,retain) CNContact * billingAddress;                                              //@synthesize billingAddress=_billingAddress - In the implementation block
@property (nonatomic,retain) NSArray * paymentSummaryItems; 
@property (nonatomic,retain) NSArray * paymentErrors;                                                 //@synthesize paymentErrors=_paymentErrors - In the implementation block
@property (nonatomic,retain) PKPayment * payment;                                                     //@synthesize payment=_payment - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsDefaults * defaults;                                     //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) PKPaymentOptionsRecents * recents;                                       //@synthesize recents=_recents - In the implementation block
@property (nonatomic,retain) PKPassLibrary * library;                                                 //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) PKPaymentWebService * paymentWebService;                                 //@synthesize paymentWebService=_paymentWebService - In the implementation block
@property (nonatomic,retain) PKPeerPaymentService * peerPaymentService;                               //@synthesize peerPaymentService=_peerPaymentService - In the implementation block
@property (nonatomic,retain) NSArray * pendingTransactions;                                           //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,copy) id updateHandler;                                                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,readonly) NSString * merchantName; 
@property (nonatomic,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) NSDecimalNumber * transactionAmount; 
@property (nonatomic,readonly) NSArray * items;                                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) BOOL pinRequired; 
@property (nonatomic,retain) PKRemoteDevice * remoteDevice;                                           //@synthesize remoteDevice=_remoteDevice - In the implementation block
@property (nonatomic,retain) PKPeerPaymentQuote * peerPaymentQuote;                                   //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,retain) PKPaymentApplication * paymentApplication;                               //@synthesize paymentApplication=_paymentApplication - In the implementation block
@property (nonatomic,retain) PKPaymentPass * pass;                                                    //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) NSArray * acceptedPasses; 
@property (nonatomic,readonly) NSArray * unavailablePasses; 
@property (nonatomic,readonly) BOOL wantsInstructions; 
@property (nonatomic,retain) PKPaymentInstructions * instructions;                                    //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,readonly) NSArray * remoteDevices; 
@property (nonatomic,readonly) NSArray * allRemoteDevices;                                            //@synthesize allRemoteDevices=_allRemoteDevices - In the implementation block
@property (nonatomic,readonly) NSArray * allNearbyRemoteDevices; 
@property (nonatomic,retain) PKRemotePaymentInstrument * remotePaymentInstrument;                     //@synthesize remotePaymentInstrument=_remotePaymentInstrument - In the implementation block
@property (nonatomic,retain) PKRemotePaymentInstrument * initialRemotePaymentInstrument;              //@synthesize initialRemotePaymentInstrument=_initialRemotePaymentInstrument - In the implementation block
@property (nonatomic,readonly) NSSet * allAcceptedRemotePaymentInstruments;                           //@synthesize allAcceptedRemotePaymentInstruments=_allAcceptedRemotePaymentInstruments - In the implementation block
@property (nonatomic,readonly) NSSet * allUnavailableRemotePaymentInstruments;                        //@synthesize allUnavailableRemotePaymentInstruments=_allUnavailableRemotePaymentInstruments - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKPaymentInstructions *)instructions;
-(void)setInstructions:(PKPaymentInstructions *)arg1 ;
-(NSString *)currencyCode;
-(id)init;
-(NSArray *)items;
-(void)beginUpdates;
-(void)endUpdates;
-(PKPaymentOptionsRecents *)recents;
-(void)setRecents:(PKPaymentOptionsRecents *)arg1 ;
-(long long)mode;
-(id)initWithMode:(long long)arg1 ;
-(PKPassLibrary *)library;
-(void)setLibrary:(PKPassLibrary *)arg1 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(void)_ensureItems;
-(void)_ensurePaymentContentItems;
-(void)_notifyModelChanged;
-(void)_ensureItemForClass:(Class)arg1 ;
-(BOOL)shouldUpdateContactDataItem;
-(void)updateBillingErrors;
-(unsigned long long)_insertionIndexForItem:(id)arg1 ;
-(void)_ensurePlaceholderItems;
-(id)automaticallyPresentedPassFromAcceptedPasses:(id)arg1 ;
-(NSArray *)paymentContentItems;
-(void)setPaymentContentItems:(NSArray *)arg1 ;
-(void)setShippingType:(NSString *)arg1 ;
-(void)setShippingEditable:(BOOL)arg1 ;
-(void)setShippingEditableMessage:(NSString *)arg1 ;
-(void)setPeerPaymentQuote:(PKPeerPaymentQuote *)arg1 ;
-(void)_setDataItem:(id)arg1 ;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 notify:(BOOL)arg3 ;
-(void)_setPaymentContentDataItems:(id)arg1 ;
-(id)_filterAndProcessPaymentPassesUsingConfiguration:(id)arg1 ;
-(BOOL)wantsInstructions;
-(void)updateRemoteDevices:(id)arg1 ignoreProximity:(BOOL)arg2 ;
-(id)_inAppPaymentPassesForPaymentRequest:(id)arg1 ;
-(id)_inAppPrivateLabelPaymentPasses;
-(id)_filterAndProcessPaymentApplicationsUsingConfigurationForPass:(id)arg1 ;
-(long long)_statusForPass:(id)arg1 ;
-(void)_setStatus:(long long)arg1 forPass:(id)arg2 ;
-(void)setShippingAddressErrors:(id)arg1 ;
-(void)setPaymentErrors:(NSArray *)arg1 ;
-(id)paymentErrorsFromLegacyStatus:(long long)arg1 ;
-(NSArray *)remoteDevices;
-(NSArray *)allNearbyRemoteDevices;
-(void)setRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(void)updateRemoteDevices:(id)arg1 ;
-(id)acceptedRemotePaymentInstrumentsForRemoteDevice:(id)arg1 ;
-(void)setStatus:(long long)arg1 forItemWithType:(long long)arg2 ;
-(void)setPayment:(PKPayment *)arg1 ;
-(void)setDefaults:(PKPaymentOptionsDefaults *)arg1 ;
-(PKPaymentWebService *)paymentWebService;
-(NSArray *)allRemoteDevices;
-(PKRemotePaymentInstrument *)remotePaymentInstrument;
-(PKRemotePaymentInstrument *)initialRemotePaymentInstrument;
-(void)setInitialRemotePaymentInstrument:(PKRemotePaymentInstrument *)arg1 ;
-(NSSet *)allAcceptedRemotePaymentInstruments;
-(NSSet *)allUnavailableRemotePaymentInstruments;
-(CNContact *)cachedRecentAddress;
-(void)setCachedRecentAddress:(CNContact *)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(NSString *)hostApplicationIdentifier;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(NSDecimalNumber *)transactionAmount;
-(PKPeerPaymentService *)peerPaymentService;
-(void)setPeerPaymentService:(PKPeerPaymentService *)arg1 ;
-(PKPaymentRequest *)paymentRequest;
-(void)setPaymentRequest:(PKPaymentRequest *)arg1 ;
-(void)setRemoteDevice:(PKRemoteDevice *)arg1 ;
-(void)setPaymentWebService:(PKPaymentWebService *)arg1 ;
-(void)setPaymentApplication:(PKPaymentApplication *)arg1 ;
-(NSArray *)paymentSummaryItems;
-(id)itemForType:(long long)arg1 ;
-(PKPaymentApplication *)paymentApplication;
-(void)setPass:(id)arg1 paymentApplication:(id)arg2 ;
-(void)setPaymentSummaryItems:(NSArray *)arg1 ;
-(PKPayment *)payment;
-(BOOL)pinRequired;
-(NSArray *)acceptedPasses;
-(PKPaymentOptionsDefaults *)defaults;
-(NSString *)defaultPaymentPassUniqueIdentifier;
-(BOOL)isValidWithError:(id*)arg1 ;
-(CNContact *)billingAddress;
-(NSString *)shippingType;
-(PKShippingMethod *)shippingMethod;
-(NSArray *)paymentErrors;
-(NSString *)hostAppLocalizedName;
-(NSString *)merchantName;
-(void)setHostAppLocalizedName:(NSString *)arg1 ;
-(NSString *)shippingEditableMessage;
-(CNContact *)shippingAddress;
-(BOOL)isShippingEditable;
-(void)setShippingAddress:(CNContact *)arg1 ;
-(CNContact *)shippingName;
-(void)setShippingName:(CNContact *)arg1 ;
-(CNContact *)shippingPhone;
-(void)setShippingPhone:(CNContact *)arg1 ;
-(CNContact *)shippingEmail;
-(void)setShippingEmail:(CNContact *)arg1 ;
-(id)acceptedPaymentApplicationsForPass:(id)arg1 ;
-(id)unavailablePaymentApplicationsForPass:(id)arg1 ;
-(NSArray *)unavailablePasses;
-(void)setBillingAddress:(CNContact *)arg1 ;
-(void)setShippingMethod:(PKShippingMethod *)arg1 ;
-(PKRemoteDevice *)remoteDevice;
-(NSArray *)pendingTransactions;
-(void)setPendingTransactions:(NSArray *)arg1 ;
@end

