/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPDecoder.h>

@protocol TSPMemoryDecoderDelegate, OS_dispatch_data;
@class NSObject, NSString;

@interface TSPMemoryDecoder : NSObject <TSPDecoder> {

	id<TSPMemoryDecoderDelegate> _delegate;
	NSObject*<OS_dispatch_data> _metadataDispatchData;
	NSObject*<OS_dispatch_data> _rootObjectComponentDispatchData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData;                         //@synthesize metadataDispatchData=_metadataDispatchData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData;              //@synthesize rootObjectComponentDispatchData=_rootObjectComponentDispatchData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3 ;
-(id)initWithEncodedData:(id)arg1 delegate:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(id)init;
@end
