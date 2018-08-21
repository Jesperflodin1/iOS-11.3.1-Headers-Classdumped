/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSData, NSDictionary, NSMutableDictionary;

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {

	NSURL* _postURLWithQuery;
	BOOL _hadPreconditionFailure;
	int _state;
	NSString* _previousETag;
	NSString* _previousScheduleTag;
	NSData* _updatedResourcePayload;
	NSString* _updatedETag;
	NSString* _updatedScheduleTag;
	NSDictionary* _postFailureSizes;
	NSURL* _resourceURL;
	NSDictionary* _attachments;
	NSDictionary* _contentTypes;
	NSMutableDictionary* _filenamesToServerLocation;

}

@property (assign,nonatomic) int state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSURL * resourceURL;                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attachments;                                   //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,retain) NSDictionary * contentTypes;                                  //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * filenamesToServerLocation;              //@synthesize filenamesToServerLocation=_filenamesToServerLocation - In the implementation block
@property (nonatomic,retain) NSData * updatedResourcePayload;                              //@synthesize updatedResourcePayload=_updatedResourcePayload - In the implementation block
@property (assign,nonatomic) BOOL hadPreconditionFailure;                                  //@synthesize hadPreconditionFailure=_hadPreconditionFailure - In the implementation block
@property (nonatomic,retain) NSString * updatedETag;                                       //@synthesize updatedETag=_updatedETag - In the implementation block
@property (nonatomic,retain) NSString * updatedScheduleTag;                                //@synthesize updatedScheduleTag=_updatedScheduleTag - In the implementation block
@property (nonatomic,retain) NSDictionary * postFailureSizes;                              //@synthesize postFailureSizes=_postFailureSizes - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                                      //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSString * previousScheduleTag;                               //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(void)setResourceURL:(NSURL *)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setAttachments:(NSDictionary *)arg1 ;
-(NSDictionary *)attachments;
-(NSDictionary *)contentTypes;
-(void)setContentTypes:(NSDictionary *)arg1 ;
-(void)startTaskGroup;
-(id)urlWithQuery;
-(NSString *)previousScheduleTag;
-(NSString *)previousETag;
-(NSString *)updatedETag;
-(NSString *)updatedScheduleTag;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(void)setPreviousETag:(NSString *)arg1 ;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)_sendAttachments;
-(NSMutableDictionary *)filenamesToServerLocation;
-(void)setUpdatedResourcePayload:(NSData *)arg1 ;
-(void)setUpdatedScheduleTag:(NSString *)arg1 ;
-(void)setUpdatedETag:(NSString *)arg1 ;
-(void)setHadPreconditionFailure:(BOOL)arg1 ;
-(void)setPostFailureSizes:(NSDictionary *)arg1 ;
-(BOOL)_postedLastAttachment;
-(void)_fetchUpdatedContent;
-(BOOL)hadPreconditionFailure;
-(void)_handlePostResponse:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5 ;
-(NSData *)updatedResourcePayload;
-(NSDictionary *)postFailureSizes;
-(void)setFilenamesToServerLocation:(NSMutableDictionary *)arg1 ;
-(NSURL *)resourceURL;
@end

