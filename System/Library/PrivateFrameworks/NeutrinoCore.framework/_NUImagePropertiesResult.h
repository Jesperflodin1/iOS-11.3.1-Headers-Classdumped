/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUImagePropertiesResult.h>

@protocol NUImageProperties;
@class NSString;

@interface _NUImagePropertiesResult : _NURenderResult <NUImagePropertiesResult> {

	id<NUImageProperties> _properties;

}

@property (retain) id<NUImageProperties> properties;                 //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(NSString *)description;
-(void)setProperties:(id<NUImageProperties>)arg1 ;
-(id<NUImageProperties>)properties;
@end

