/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFContainerRegistry.h>

@protocol NFContainerRegistry <NSObject>
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer; 
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer; 
@property (nonatomic,readonly) id<NFCallbackRegistration> callback; 
@required
-(id<NFCallbackRegistration>)callback;
-(id<NFRegistrationContainer>)publicContainer;
-(id<NFRegistrationContainer>)privateContainer;

@end


@protocol NFRegistrationContainer, NFCallbackRegistration;
@class NSString;

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {

	id<NFRegistrationContainer> _publicContainer;
	id<NFRegistrationContainer> _privateContainer;
	id<NFCallbackRegistration> _callback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NFRegistrationContainer> publicContainer;               //@synthesize publicContainer=_publicContainer - In the implementation block
@property (nonatomic,readonly) id<NFRegistrationContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (nonatomic,readonly) id<NFCallbackRegistration> callback;                       //@synthesize callback=_callback - In the implementation block
-(id<NFCallbackRegistration>)callback;
-(id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 callback:(id)arg3 ;
-(id<NFRegistrationContainer>)publicContainer;
-(id<NFRegistrationContainer>)privateContainer;
@end

