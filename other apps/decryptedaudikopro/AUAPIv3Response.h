//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AUAPIv3Response : NSObject
{
    _Bool _success;
    NSString *_message;
    long long _code;
    id _parsedResponce;
}

@property(retain, nonatomic) id parsedResponce; // @synthesize parsedResponce=_parsedResponce;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (void)parseJSON:(id)arg1 forEntityClass:(Class)arg2;
- (id)initWithJSONResponse:(id)arg1 entityClass:(Class)arg2;

@end

