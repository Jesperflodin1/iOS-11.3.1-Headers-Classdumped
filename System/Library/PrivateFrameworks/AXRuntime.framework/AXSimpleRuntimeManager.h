/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXSimpleRuntimeManager : NSObject {

	BOOL _systemWideServer;
	/*^block*/id _parameterizedAttributeCallback;
	/*^block*/id _attributeCallback;
	/*^block*/id _setAttributeCallback;
	/*^block*/id _performActionCallback;
	/*^block*/id _clientObserverCallback;
	/*^block*/id _hitTestCallback;
	/*^block*/id _applicationElementCallback;
	/*^block*/id _outgoingValuePreprocessor;

}

@property (assign,nonatomic) BOOL systemWideServer;                        //@synthesize systemWideServer=_systemWideServer - In the implementation block
@property (nonatomic,copy) id parameterizedAttributeCallback;              //@synthesize parameterizedAttributeCallback=_parameterizedAttributeCallback - In the implementation block
@property (nonatomic,copy) id attributeCallback;                           //@synthesize attributeCallback=_attributeCallback - In the implementation block
@property (nonatomic,copy) id setAttributeCallback;                        //@synthesize setAttributeCallback=_setAttributeCallback - In the implementation block
@property (nonatomic,copy) id performActionCallback;                       //@synthesize performActionCallback=_performActionCallback - In the implementation block
@property (nonatomic,copy) id clientObserverCallback;                      //@synthesize clientObserverCallback=_clientObserverCallback - In the implementation block
@property (nonatomic,copy) id hitTestCallback;                             //@synthesize hitTestCallback=_hitTestCallback - In the implementation block
@property (nonatomic,copy) id applicationElementCallback;                  //@synthesize applicationElementCallback=_applicationElementCallback - In the implementation block
@property (nonatomic,copy) id outgoingValuePreprocessor;                   //@synthesize outgoingValuePreprocessor=_outgoingValuePreprocessor - In the implementation block
+(id)sharedManager;
-(void)start;
-(BOOL)systemWideServer;
-(void)setSystemWideServer:(BOOL)arg1 ;
-(id)parameterizedAttributeCallback;
-(void)setParameterizedAttributeCallback:(id)arg1 ;
-(id)attributeCallback;
-(void)setAttributeCallback:(id)arg1 ;
-(id)setAttributeCallback;
-(void)setSetAttributeCallback:(id)arg1 ;
-(id)performActionCallback;
-(void)setPerformActionCallback:(id)arg1 ;
-(id)clientObserverCallback;
-(void)setClientObserverCallback:(id)arg1 ;
-(id)hitTestCallback;
-(void)setHitTestCallback:(id)arg1 ;
-(id)applicationElementCallback;
-(void)setApplicationElementCallback:(id)arg1 ;
-(id)outgoingValuePreprocessor;
-(void)setOutgoingValuePreprocessor:(id)arg1 ;
@end

