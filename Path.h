#pragma once

template <class TVertex, class TEdge>
class Path
{
    TVertex source;
    TVertex destination;
    TEdge edge;

    public:
        Path() = default;
        Path(const TVertex from, const TVertex to, const TEdge edge) : source(from), destination(to), edge(edge) {}
        TVertex Source() const
        {
            return source;
        }
        TVertex Destination() const
        {
            return destination;
        }
        TEdge Edge() const
        {
            return edge;
        }
        bool operator==(const Path& data) const
        {
            return source == data.source && destination == data.destination;
        }
        bool operator!=(const Path& data) const
        {
            return !(this == data);
        }
};