/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVRemoteCore/TVRemoteCore-Structs.h>
@class NSString;

@interface _TVRCMRTextEditingAttributesWrapper : NSObject {

	void* _attributes;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * prompt; 
@property (nonatomic,readonly) MRTextInputTraits traits; 
-(NSString *)title;
-(NSString *)prompt;
-(MRTextInputTraits)traits;
-(id)initWithAttributes:(void*)arg1 ;
@end
