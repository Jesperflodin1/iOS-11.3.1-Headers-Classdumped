/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKCacheNode : NSObject {

	VKCacheKey _key;
	id _value;
	VKCacheNode* _next;
	VKCacheNode* _previous;

}

@property (assign,nonatomic) VKCacheKey key;                      //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) VKCacheNode * next;                  //@synthesize next=_next - In the implementation block
@property (assign,nonatomic) VKCacheNode * previous;              //@synthesize previous=_previous - In the implementation block
-(VKCacheKey)key;
-(VKCacheNode *)next;
-(VKCacheNode *)previous;
-(void)dealloc;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setKey:(VKCacheKey)arg1 ;
-(void)setPrevious:(VKCacheNode *)arg1 ;
-(void)setNext:(VKCacheNode *)arg1 ;
@end

