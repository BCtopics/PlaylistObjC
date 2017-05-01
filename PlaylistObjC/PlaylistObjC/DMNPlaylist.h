//
//  DMNPlaylist.h
//  PlaylistObjC
//
//  Created by Bradley GIlmore on 5/1/17.
//  Copyright © 2017 Bradley Gilmore. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DMNSong.h"

@interface DMNPlaylist : NSObject

- (instancetype)initWithName:(NSString *)name songs:(NSArray *)songs;

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong, readonly) NSArray *songs;

- (void)addSongsObject:(DMNSong *)song;
- (void)removeSongObject:(DMNSong *)song;


@end
