/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSBlob.h>

@protocol IKJSBlob <JSExport>
@end


@class NSData;

@interface IKJSBlob : IKJSObject <IKJSBlob> {

	NSData* _data;

}

@property (nonatomic,readonly) NSData * data; 
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
@end

