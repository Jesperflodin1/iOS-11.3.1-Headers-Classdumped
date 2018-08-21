/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HFServiceDescriptor : NSObject <NAIdentifiable> {

	HFServiceDescriptor* _parentServiceDescriptor;
	NSString* _serviceType;
	NSString* _serviceSubtype;
	/*^block*/id _parentServiceDescriptorGenerator;

}

@property (nonatomic,copy,readonly) id parentServiceDescriptorGenerator;                   //@synthesize parentServiceDescriptorGenerator=_parentServiceDescriptorGenerator - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                                //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceSubtype;                             //@synthesize serviceSubtype=_serviceSubtype - In the implementation block
@property (nonatomic,readonly) HFServiceDescriptor * parentServiceDescriptor;              //@synthesize parentServiceDescriptor=_parentServiceDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
-(NSString *)serviceType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptor:(id)arg3 ;
-(id)initWithServiceType:(id)arg1 serviceSubtype:(id)arg2 parentServiceDescriptorGenerator:(/*^block*/id)arg3 ;
-(id)parentServiceDescriptorGenerator;
-(HFServiceDescriptor *)parentServiceDescriptor;
-(NSString *)serviceSubtype;
@end

