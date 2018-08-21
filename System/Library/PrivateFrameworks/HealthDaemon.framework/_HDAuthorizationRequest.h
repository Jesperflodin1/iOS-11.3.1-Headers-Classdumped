/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {

	/*^block*/id _completionHandler;
	NSUUID* _identifier;
	NSSet* _typesToWrite;
	NSSet* _typesToRead;

}

@property (nonatomic,readonly) NSUUID * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToWrite;              //@synthesize typesToWrite=_typesToWrite - In the implementation block
@property (nonatomic,copy,readonly) NSSet * typesToRead;               //@synthesize typesToRead=_typesToRead - In the implementation block
-(id)description;
-(NSUUID *)identifier;
-(id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSSet *)typesToWrite;
-(NSSet *)typesToRead;
-(void)invokeCompletionHandlerWithSuccess:(BOOL)arg1 error:(id)arg2 ;
@end

