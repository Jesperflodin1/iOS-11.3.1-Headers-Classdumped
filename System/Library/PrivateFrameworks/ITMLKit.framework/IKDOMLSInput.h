/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMLSInput.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject <IKJSDOMLSInput> {

	BOOL _certifiedText;
	id _byteStream;
	NSString* _stringData;
	NSString* _encoding;

}

@property (nonatomic,retain) id byteStream;                      //@synthesize byteStream=_byteStream - In the implementation block
@property (nonatomic,retain) NSString * stringData;              //@synthesize stringData=_stringData - In the implementation block
@property (nonatomic,retain) NSString * encoding;                //@synthesize encoding=_encoding - In the implementation block
@property (assign,nonatomic) BOOL certifiedText;                 //@synthesize certifiedText=_certifiedText - In the implementation block
-(NSString *)stringData;
-(id)byteStream;
-(void)setStringData:(NSString *)arg1 ;
-(BOOL)certifiedText;
-(void)setCertifiedText:(BOOL)arg1 ;
-(void)setByteStream:(id)arg1 ;
-(void)setEncoding:(NSString *)arg1 ;
-(NSString *)encoding;
@end

