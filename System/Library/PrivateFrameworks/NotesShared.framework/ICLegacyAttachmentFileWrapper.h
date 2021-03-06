/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface ICLegacyAttachmentFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _cidURL;

}

@property (nonatomic,retain) NSURL * cidURL;                                 //@synthesize cidURL=_cidURL - In the implementation block
@property (nonatomic,readonly) NSString * attachmentIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCidURL:(NSURL *)arg1 ;
-(NSString *)attachmentIdentifier;
-(NSURL *)cidURL;
-(id)initWithCIDURL:(id)arg1 ;
@end

