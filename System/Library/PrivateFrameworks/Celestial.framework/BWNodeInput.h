/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BWNode, BWNodeConnection, BWNodeInputMediaConfiguration, NSMutableDictionary, BWNodeInputMediaProperties, BWFormatRequirements, BWFormat, BWVideoFormat, NSArray;

@interface BWNodeInput : NSObject {

	NSString* _name;
	BOOL _mediaTypeIsVideo;
	long long _configurationID;
	unsigned _mediaType;
	unsigned long long _index;
	BOOL _enabled;
	BWNode* _node;
	BWNodeConnection* _connection;
	long long _liveConfigurationID;
	unsigned _numberOfBuffersReceived;
	unsigned _numberOfBuffersDropped;
	BWNodeInputMediaConfiguration* _primaryMediaConfiguration;
	BWNodeInputMediaConfiguration* _unspecifiedAttachedMediaConfiguration;
	NSMutableDictionary* _attachedMediaConfigurations;
	BWNodeInputMediaProperties* _primaryMediaProperties;
	NSMutableDictionary* _attachedMediaProperties;

}

@property (nonatomic,retain) BWFormatRequirements * formatRequirements; 
@property (nonatomic,retain) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (nonatomic,readonly) BWFormat * liveFormat; 
@property (assign,nonatomic) int passthroughMode; 
@property (assign,nonatomic) BOOL passesBuffersDownstream; 
@property (assign,nonatomic) int retainedBufferCount; 
@property (assign,nonatomic) int delayedBufferCount; 
@property (assign,nonatomic) int indefinitelyHeldBufferCount; 
@property (nonatomic,readonly) BOOL mediaTypeIsVideo;                                                            //@synthesize mediaTypeIsVideo=_mediaTypeIsVideo - In the implementation block
@property (nonatomic,copy) NSString * name;                                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned mediaType;                                                               //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                                                         //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) BWNodeConnection * connection;                                                      //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) long long configurationID;                                                          //@synthesize configurationID=_configurationID - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaConfiguration * primaryMediaConfiguration;                        //@synthesize primaryMediaConfiguration=_primaryMediaConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * specifiedAttachedMediaKeys; 
@property (nonatomic,retain) BWNodeInputMediaConfiguration * unspecifiedAttachedMediaConfiguration;              //@synthesize unspecifiedAttachedMediaConfiguration=_unspecifiedAttachedMediaConfiguration - In the implementation block
@property (nonatomic,readonly) BWNodeInputMediaProperties * primaryMediaProperties;                              //@synthesize primaryMediaProperties=_primaryMediaProperties - In the implementation block
@property (nonatomic,readonly) NSArray * resolvedAttachedMediaKeys; 
@property (nonatomic,readonly) long long liveConfigurationID;                                                    //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersReceived;                                                 //@synthesize numberOfBuffersReceived=_numberOfBuffersReceived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                                                  //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 index:(unsigned long long)arg3 ;
-(id)initWithMediaType:(unsigned)arg1 node:(id)arg2 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWVideoFormat *)videoFormat;
-(void)setPassthroughMode:(int)arg1 ;
-(void)setUnspecifiedAttachedMediaConfiguration:(BWNodeInputMediaConfiguration *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setMediaConfiguration:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(BWNodeInputMediaConfiguration *)primaryMediaConfiguration;
-(id)mediaPropertiesForAttachedMediaKey:(id)arg1 ;
-(void)_setMediaProperties:(id)arg1 forAttachedMediaKey:(id)arg2 ;
-(void)_setPrimaryProperties:(id)arg1 ;
-(void)_clearAllMediaProperties;
-(void)_handleConfigurationLiveMessage:(id)arg1 ;
-(BWNodeInputMediaProperties *)primaryMediaProperties;
-(BWFormat *)liveFormat;
-(int)passthroughMode;
-(int)_passthroughModeForUnspecifiedAttachedMedia;
-(id)mediaConfigurationForAttachedMediaKey:(id)arg1 ;
-(NSArray *)specifiedAttachedMediaKeys;
-(NSArray *)resolvedAttachedMediaKeys;
-(int)_passthroughModeForAttachedMediaKey:(id)arg1 ;
-(BOOL)mediaTypeIsVideo;
-(BWNodeInputMediaConfiguration *)unspecifiedAttachedMediaConfiguration;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersReceived;
-(unsigned)numberOfBuffersDropped;
-(int)retainedBufferCount;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(void)setPassesBuffersDownstream:(BOOL)arg1 ;
-(BOOL)passesBuffersDownstream;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(BWFormat *)format;
-(unsigned long long)index;
-(BWNode *)node;
-(BWNodeConnection *)connection;
-(void)setConnection:(BWNodeConnection *)arg1 ;
-(unsigned)mediaType;
-(void)setFormat:(BWFormat *)arg1 ;
-(void)handleMessage:(id)arg1 ;
@end

